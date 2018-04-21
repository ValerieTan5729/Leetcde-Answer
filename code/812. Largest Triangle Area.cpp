// Runtime: 16ms
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double result = 0;
        int num = points.size();
        for (int i = 0; i < num; i++) { // point A
            for (int j = 0; j < num; j++) { // point B
                for (int k = 0; k < num; k++) { // point C
                    double area = 0.5 * abs(points[i][0] * points[j][1] + points[j][0] * points[k][1] + points[k][0] * points[i][1] - points[i][0] * points[k][1] - points[k][0] * points[j][1] - points[j][0] * points[i][1]);
                    result = max(result, area);
                }
            }
        }
        return result;
    }
};