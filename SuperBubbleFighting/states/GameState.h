#ifndef GAMESTATE_H
#define GAMESTATE_H


#include "State.h"
#include "../entities/Level.h"


class Level;

class GameState 
	: public State
{
private:
    sf::RenderWindow * window;

	unsigned level_count;

	

	std::vector<Level*> levels;

    //funcs
	void initLevels();
public:
    GameState(sf::RenderWindow * window, std::stack<State*>*states);
    virtual ~GameState();


    //funcs
    void endState();
    void updateInput(const float& time);
    void update(float time);
    void render(sf::RenderWindow *window);
};

#endif
