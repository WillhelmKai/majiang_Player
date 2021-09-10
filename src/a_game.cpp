#include <algorithm> 
#include <vector>
#include "A_Set_of_Cards.cpp"
#include "A_Player.cpp"



class A_Game
{
private:
	A_Set_of_Cards cards;
	std::vector<A_Player> players; 
	A_Player judge;

public:
	A_Game() 
	{	
		//create players to play

	    A_Player judge = A_Player();
	    for (int i =this->players.size(); i<4; i++)
        {
            this->players.push_back(A_Player());
        };

		this->cards = A_Set_of_Cards();
		this->cards.wash();


		//give init cards
        for(int i = 0; i < 13; i ++)
        {
        	for(int j = 0; j < this->players.size(); j++)
    		{
    			this->players[j].get_a_card( this->cards.pop_a_card() );	
    		};
        }; 

	};

	~A_Game()
	{

	};

	void game_start()
	{

    int id_for_next_player = 0;
	//while there is not one win and still have cards left
    while(this)
    	{

    	};

	//in each round, 

		//the next person draw a card

		//take an action

		//give a card


		//everybody take an action


	};


	
};