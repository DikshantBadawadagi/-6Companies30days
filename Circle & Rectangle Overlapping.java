class Solution {
    public boolean checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        x1 = x1-xCenter;
        x2 = x2-xCenter;
        y1 = y1-yCenter;
        y2 = y2-yCenter;

        int x_dist,y_dist;

        if(x1 > 0){
            x_dist = x1;
        }
        else if(x2 < 0){
            x_dist = x2;
        }
        else{
            x_dist = 0;
        }

        if(y1 > 0){
            y_dist = y1;
        }
        else if(y2 < 0){
            y_dist = y2;
        }
        else{
            y_dist = 0;
        }

        return x_dist*x_dist + y_dist*y_dist <= radius*radius;
    }
}
