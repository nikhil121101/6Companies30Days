class Solution {
public:
    
    double x_center, y_center, radius;
    
    double random() {
        return (double)rand() / RAND_MAX;
    }
    
    Solution(double radius, double x_center, double y_center) {
        this->radius = radius;
        this->x_center = x_center;
        this->y_center = y_center;
        srand(time(0));
    }
    
    vector<double> randPoint() {
        double theta = random() * (2*M_PI);
        double r = sqrt(random()) * radius;
        return {x_center + r*cos(theta), y_center + r*sin(theta)};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */