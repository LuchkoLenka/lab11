#include <iostream>
#include <vector>

struct Point {
    double x, y;
};

// Перевірка, чи точка знаходиться всередині многокутника
bool isInsidePolygon(const Point& point, const std::vector<Point>& polygon) {
    int crossings = 0;
    int n = polygon.size();

    for (int i = 0; i < n; ++i) {
        const Point& p1 = polygon[i];
        const Point& p2 = polygon[(i + 1) % n]; // Наступна точка (замкнутий многокутник)

        // Перевірка, чи промінь перетинає ребро многокутника
        if ((p1.y > point.y) != (p2.y > point.y) &&
            point.x < (p2.x - p1.x) * (point.y - p1.y) / (p2.y - p1.y) + p1.x) {
            crossings++;
        }
    }

    // Якщо кількість перетинів непарна, точка всередині многокутника
    return crossings % 2 == 1;
}

int main() {
    // Введіть координати точок многокутника
    std::vector<Point> polygon = { {0, 0}, {5, 0}, {5, 5}, {0, 5} };

    // Введіть координати точки, яку потрібно перевірити
    Point testPoint = { 2, 3 };

    if (isInsidePolygon(testPoint, polygon)) {
        std::cout << "The point is inside the polygon." << std::endl;
    }
    else {
        std::cout << "The point is outside the polygon." << std::endl;
    }

    return 0;
}
