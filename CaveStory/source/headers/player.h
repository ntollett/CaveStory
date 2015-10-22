#ifndef PLAYER_H
#define PLAYER_H

#include "globals.h"
#include "animatedsprite.h"

class Graphics;

class Player : public AnimatedSprite {
public:
	Player();
	Player(Graphics &graphics, float x, float y);
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	/* moveLeft()
	 * Moves the player left by -dx
	 */
	void moveLeft();

	/* moveRight()
	 * Moves the player right by dx
	 */
	void moveRight();

	/* stopMoving()
	 * Stops moving the player and plays the idle animation
	 */
	void stopMoving();

	virtual void animationDone(std::string currentAnimation);
	virtual void setupAnimations();
private:
	float _dx, _dy;

	Direction _facing;
};

#endif