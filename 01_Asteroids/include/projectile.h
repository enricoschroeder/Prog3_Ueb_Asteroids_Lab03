#pragma once

#include "gameobject.h"

class Projectile : public GameObject
{
private:
    inline static const std::string texturePath_ = "./resources/bullet.png";
    const float movementSpeed_ = 8.f;
    const float range_ = 400.f;

    float distanceTravelled_;

public:
    Projectile(raylib::Vector2 initialPos, float rotation);

    void update() override;

    void move(raylib::Vector2 moveVec) override;
};