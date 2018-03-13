#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

// Constants for array sizes
const int GAME = 50;
const int CONTENT_RATING = 20;
const int PLATFORM = 15;
const int GAME_SUMMARY = 200;
const int COMMENTS = 100;
const int EMAIL = 30;
const int AVAILABILITY = 8;

//Struct for each game

struct game
{
    char game_title[GAME];
    char content[CONTENT_RATING];
    char platform[PLATFORM];
    char summary[GAME_SUMMARY];
    char comments[COMMENTS];
    char email[EMAIL];
    char avail[AVAILABILITY];
    
};

//Class for game collection


class Game_Collection 
{ 

 public: 
 Game_Collection (); 
 ~Game_Collection(); 
 void Add_Game(int type_of_collection, game &); /*  game is a struct from program #3 */
 void Input_Game(); /*read in a new game from the 
user*/ 
 void Add_Comments(char name_of_game[], char 
comments[]); /* add comments for a game */
 void Display_all(); 
 
bool Find(char name_to_match[], game 
& found_game); 
 private: 
  
game * new_games;
game * used_games;
game * games_for_sale;
 
};




void obtain_info(char ask[], int max_size, char result[]);
void gameinfo(game &); //obtain struc info
void showall(game &); //display all members
void sort(game [], int); //sort the collection of games
bool add(); //would the user like more?


//write out information to file
bool load_games(char filename[], game[], int & num); 
bool save_games(char filename[], game[], int num);
void getfilename(char filename[]);



int main()
{
    
    game collection[30];
    sort(collection, 30);  
    
    cin.get();
    return 0;
    
}

//Ask the user what file they want to work with
void getfilename(char name[])
{
    obtain_info("Please enter the name of a file you would like to use: ", 50, name);
    strcat(name,".txt");
}





//sort function manages a sereies of games
void sort(game array[], int max_games)
{
    char filename[35]; //holds the file name 
    
    int num_games=0; //the number of games in the array
    
    
    getfilename(filename);
    if(!load_games(filename, array, max_games))
        cout <<"No games currently in file...\n\n";
        
    int i = num_games;
    do
    {
         gameinfo(array[i]);
         showall(array[i]); 
         ++i;    
    } while (add() && i < max_games);
    
    if (!save_games(filename, array, i))
       cout <<"Problems with your file!\n\n\n";
       
    //Display all games:
    cout <<"The games in this directory are: ";
    for (int j=0; j < i; ++j)
        showall(array[j]);
        
}

//Load all games from an external file!
bool load_games(char filename[], game games[], int & num)
{ 
    ifstream read;
    read.open(filename); 
    
    if (!read) 
       return false;
    
    
    read.get(games[num].game_title,GAME,'|');
    read.ignore(100,'|');
    while(read && !read.eof()) 
    {
        read.get(games[num].game_title,GAME,'|');
        read.ignore(100,'|');
        read.get(games[num].content, CONTENT_RATING, '|');
        read.ignore(100,'|');
        read.get(games[num].platform, PLATFORM, '|');
        read.ignore(100,'|');
        read.get(games[num].summary,GAME_SUMMARY,'|');
        read.ignore(100,'|');
        read.get(games[num].comments,COMMENTS,'|');
        read.ignore(100,'|');
        read.get(games[num].email,EMAIL,'|');
        read.ignore(100,'|');
        read.get(games[num].avail,AVAILABILITY,'|');
        read.ignore(100,'|');
       
        
    }
    read.close();
    return true;
}

//Write games to file
bool save_games(char filename[], game games[], int num)
{
    bool success = true;
    ofstream write;
    write.open(filename);  
    
    if (!write) 
    {
       cout <<"CAN'T SAVE...\n\n";
       success = false;
    }
    else
    {
       for(int i=0; i < num; ++i)
       {
        write << games[i].game_title  <<"|"
              << games[i].content  <<"|"
              << games[i].platform  <<"|"
              << games[i].summary <<"|"
              << games[i].comments <<"|"
              << games[i].email <<"|"
              << games[i].avail <<endl;
       }
       write.close();
       write.clear();
    }
    return success;
}

//Do you want to enter more?
bool add()
{
    char resp;
    cout <<"Would you like to enter another? Y/N ";
    cin >>resp;
    cin.ignore(100,'\n');
    if (toupper(resp) == 'Y')
       return true;
    return false;
}


void obtain_info(char prompt[], int max_size, char result[])
{
    cout <<prompt;
    cin.get(result, max_size, '\n');
    cin.ignore(100,'\n');
}

//This function reads in every member of the game
//struct
void gameinfo(game & a_game)
{
    obtain_info("Please enter a game title: ",GAME, a_game.game_title);
    obtain_info("Please enter the content: ",
         CONTENT_RATING, a_game.content);
    obtain_info("Please enter the platform: ",
         PLATFORM, a_game.platform);
    obtain_info("Please enter a summary: ", GAME_SUMMARY, 
         a_game.summary);
    obtain_info("Please enter comments: ", COMMENTS, 
         a_game.comments);
    obtain_info("Please enter the email of the owner: ", EMAIL, 
         a_game.email);
    
    
}

//Display all members
void showall(game & show)
{
    cout <<"\n\n" 
         <<show.game_title <<'\t' 
         <<show.content <<endl
         <<"Platform: " <<show.platform <<'\t' 
         <<"Summary: " <<show.summary
         <<"Comments: " <<show.comments
         <<"Email: " <<show.email 
         <<'\t' <<"Available: " <<show.avail <<endl;
}







