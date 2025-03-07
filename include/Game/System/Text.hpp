#pragma once
#include <Game/stdafx.hpp>
#include <Game/System/System.hpp>

// Text类，用于显示文字
class GameText {
    friend class GameGraphics;
public:
    float x, y; // 坐标
    int z; // 层级

    // 构造函数，初始化对象
    GameText();
    GameText(sf::Font* font, std::string txt, float x = 0, float y = 0);
    // 设置文字
    void setText(sf::Font* font, std::string txt, float x = 0, float y = 0);
    // 获取宽高
    std::pair <float, float> getSize();
    // 获取文字
    void show();
private:
    std::string txt;
    sf::Text text;
};
