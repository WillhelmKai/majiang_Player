// #include "A_Set_of_Cards.cpp"

class A_Player
{
private:

public:
	A_Set_of_Cards cards_in_hands;
	A_Set_of_Cards cards_dropped;
	A_Set_of_Cards card_just_drawed;
	A_Set_of_Cards special_cards;

	A_Player()
	{

	};
	~A_Player()
	{

	};

	void get_a_card(A_Card card)
	{
		this->put_just_drawed_card_into_hand_cards();
		this->card_just_drawed.add_a_card(card);
		
	};

	void put_just_drawed_card_into_hand_cards()
	{
		if (this->card_just_drawed.num_of_cards_left > 0)
		{
			this->cards_in_hands.add_a_card(this->card_just_drawed.pop_a_card());
		};
		this->cards_in_hands.sort();
		
	};

	void show_cards_in_hand()
	{
		this->cards_in_hands.print_cards_left();
		this->card_just_drawed.print_cards_left();
	};

	//return a strcture to indicate the output cards and actions it took 
	void take_an_action() //it take action according to all the info of other user's 
	{
	// it take an strcture to say the statu of current step

	// choose the action to take

	// like hu, peng, gang, bao tin, nothing cards 

	// after action is decided, put just drawed card into hand card

	// return the action take, and 
	};

	// checking cards in hands and status to say what action can take
	void what_actions_can_take()
	{


	// return two list of vector, indicate what action can take, 
	// and cards are valid to give related with that action
		
	};
	
};