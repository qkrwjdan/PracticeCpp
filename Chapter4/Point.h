//
// Created by macbook air on 2020-04-14.
//

#ifndef CHAPTER4_POINT_H
#define CHAPTER4_POINT_H

class Point{
private:
    int x;
    int y;

public:
    Point(const int &xpos, const int &ypos);
    bool InitMembers(int xpos, int ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
    void ShowPointInfo() const;
};

#endif //CHAPTER4_POINT_H
