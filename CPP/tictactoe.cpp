// This is the AI Based  TicTacToe implementation where after your move, the AI will play his move
// The move is decided using the Mini-Max algorithm of game theory and you'll get the reesult based on that.

#include<iostream>
using namespace std;
class TicTacToe
{
	int i=0;
	char square[9]={'0','1','2','3','4','5','6','7','8'}; //This is how we initialised the board//
	public:
	TicTacToe()
	{
	}

/******************************************************************* 
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK(Sahi hai draw ka function)
********************************************************************/
	void board()
	{

		cout << "Player (X)  -  AI (O)" << endl << endl;
		cout << endl;
	
		cout << "     |     |     " << endl;
		cout << "  " << square[0] << "  |  " << square[1] << "  |  " << square[2] << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;
	
		cout << "  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;
	
		cout << "  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << endl;

		cout << "     |     |     " << endl << endl;
	}

/*********************************************

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT(sahi hai check win ka function)
**********************************************/
	int checkwin(int player=1)
	{
		if (square[0] == square[1] && square[1] == square[2])

			return 1;
		else if (square[3] == square[4] && square[4] == square[5])
	
			return 1;
		else if (square[6] == square[7] && square[7] == square[8])
	
			return 1;
		else if (square[0] == square[3] && square[3] == square[6])
	
			return 1;
		else if (square[1] == square[4] && square[4] == square[7])
	
			return 1;
		else if (square[2] == square[5] && square[5] == square[8])
	
			return 1;
		else if (square[0] == square[4] && square[4] == square[8])
	
			return 1;
		else if (square[2] == square[4] && square[4] == square[6])
	
			return 1;
		else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
	                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
	                  && square[7] != '7' && square[8] != '8' && square[9] != '9')	
	
			return 0;
		else
			return -1;
	}
/*********************************************
		Function to do the work()
*********************************************/
	void work(int y)
	{
		int z=1;//This is used to check whether player had correct move or not//
		int choice;//Index used for input of human.
		while	(y==-1)
		{
			cout<<"enter the choice of your square"<<endl;
			while(1)//FOR CORRECT PLAYER MOVE
			{
				cin>>choice;
				z=mark(1,choice);
				if(z!=0)
				{
					break;
				}
			}
			board();
			y=checkwin();
			if(y==1)
			{
				cout<<"player_win"<<endl;
				
				break;
			}
			else if(y==0)
			{
				cout<<"it's a draw"<<endl;
			}
			//here we call ai for Computer's Turn//
			y=ai();
			if(y==0)
			{
				cout<<"it's a draw"<<endl;
			}
            else if(y==1)
            {
                cout<<"AI_win"<<endl;
            }
		}
		cout<<"Any key to exit"<<endl;
	}
/********************************************
		Function for AI move
********************************************/
	int ai()
	{
		int bestVal=-1000;
		int index=-1;
		int moveVal=-1;
		//Traverse all empty cells and evaluate minimix value for all cells
		//Then mark the optimal move which will be AI's move.
		for(int i=0;i<9;i++)
		{
			int x=square[i]-'0';
			if(i==x) //Check if block is vacant
			{
				mark(0,i);
				moveVal=minimax(square,0);
				square[i]=i+'0';//Undo the current marked;
				if(moveVal>bestVal)
				{
					bestVal=moveVal;
					index=i;
					if(bestVal==10)//If winning state is already found then exit the loop//
						break;
				}
			}
		}
		mark(0,index);
		board();
		return checkwin();
	}
/**********************************************
		Minimax function where AI is the maximizer
		and Player is minimizer
**********************************************/
	int minimax(char square[9],int pc)
	{ 
		int win=checkwin();
		//check for current move
		if(win==1 && pc==0)//If previous move was of AI,return 10 because it was a good move
		{
			return 10;
		}
		if(win==1 && pc==1)//If previous move was of Computer,return -10 because it lost the game
		{
			return -10;
		}
		if(win==0)//If no one wins and no block left,then return 0 because it's a draw.
		{
			return 0;
		}
		//Here actually the minimax function works//
		if(pc)
		{
			//Maximiser
			int best=-1000;
			for(int i=0;i<9;i++)
			{
				int x=square[i]-'0';
				if(x==i)
				{
					mark(0,i);
					best=max(best,minimax(square,0));
					square[i]=i+'0';//Undo the current move
				}
			}
			return best;
		}
		else if(!pc)
		{
			//Minimiser 
			int best=1000;
			for(int i=0;i<9;i++)
			{
				int x=square[i]-'0';
				if(x==i)
				{
					mark(1,i);
					best=min(best,minimax(square,1));
					square[i]=i+'0';//Undo the current move
				}
			}
			return best;			
		}
	}	
/**********************************************
		Function to mark the squares
		Returns 0 for wrong move
		1 for correct move
**********************************************/
	int mark(int x,int choice)
	{
		char m=(x == 1) ? 'X' : 'O';

		if (choice == 0 && square[0] == '0')
			{square[0] = m;}
		else if (choice == 2 && square[2] == '2')
			{
			square[2] = m;}
		else if (choice == 3 && square[3] == '3')
			{
			square[3] = m;}
		else if (choice == 4 && square[4] == '4')
			{
			square[4] = m;}
		else if (choice == 5 && square[5] == '5')
			{				
			square[5] = m;}
		else if (choice == 6 && square[6] == '6')
			{
			square[6] = m;}
		else if (choice == 7 && square[7] == '7')
			{
			square[7] = m;}
		else if (choice == 8 && square[8] == '8')
			{
			square[8] = m;}
		else if (choice == 1 && square[1] == '1')
			{
			square[1] = m;}
		else
		{
			if(x==1)
			{
				cout<<"Invalid move "<<endl;
				cout<<"enter right move"<<endl;
			}
			return 0;
		}
	}
};
/*
	Don't Know why I implemented in Object Oriented Paradigm
	But chill bcoz it worked at last,xD
*/
class game_driver : public TicTacToe
{
	public:
		void driver()
		{
			int cont;
			while(1)
			{
				
				board();
				work(-1);
				cin>>cont;
				if(1){break;}
				
			}
		}
};
int main()
{
	game_driver game;
	game.driver();
}
