#include "PlaylistNode.h"
#include <iostream>

using namespace std;


void PrintMenu(string title)
{
    cout << title << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl;
}

bool valid_option(char option)
{
    bool valid = false;

    if(option == 'a' || option == 'd' ||
    option == 'c' || option == 's' ||
    option == 't' || option == 'o'||
    option == 'q' )
    {
        valid = true;
    }
    
    return valid;
}

void add_song(PlaylistNode * node)
{
    PlaylistNode * current = node;
    string id, song, artist;
    int length;
    cout << "ADD SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    cin.ignore();
    getline(cin, id);
    cout << "Enter song's name:" << endl;
    getline(cin, song);
    cout << "Enter artist's name:" << endl;
    getline(cin, artist);
    cout << "Enter song's length (in seconds):" << endl;
    cin >> length;

    // Go to end
    while(current->GetNext())
    {
        current = current->GetNext();
    }

    current->SetNext(new PlaylistNode(id, song, artist, length));
    
}

void remove_song(PlaylistNode * node)
{
    string id;
    cout << "REMOVE SONG" << endl;
    cout << "Enter song's unique ID:" << endl;

    cin.ignore();
    getline(cin, id);
    
    PlaylistNode * previous = node;
    PlaylistNode * current;
    while(previous->GetNext() != nullptr)
    {
        
        current = previous->GetNext();

        if(current->GetID() == id)
        {
            previous->SetNext(current->GetNext());
            delete current;
            break;
        }

        previous = current;
    }
    
}

void change_position(PlaylistNode * node)
{
    int song_pos, target_pos;
    PlaylistNode * song;
    PlaylistNode * previous = node;
    PlaylistNode * current;
    bool moved = false;
    cout << "CHANGE POSITION OF SONG" << endl;
    cout << "Enter song's current position:" << endl;
    cin >> song_pos;

    cout << "Enter new position for song:" << endl;
    cin >> target_pos;
    
    int i = 1;
    int size = 0;

    while(previous->GetNext())
    {
        previous = previous->GetNext();
        size++;
    }
    
    if(target_pos < 1)
    {
        target_pos = 1;
    }

    if(target_pos > size)
    {
        target_pos = size;
    }
    
    previous = node;

    while(previous->GetNext())
    {
        
        current = previous->GetNext();
        if(i == song_pos)
        {
           
            song = current;
            previous->SetNext(current->GetNext());
        }

        previous = current;
        i++;

    }
    
    previous = node;
    i = 1;
    while(previous->GetNext())
    {
        current = previous->GetNext();
        if(i == target_pos)
        {
            previous->InsertAfter(song);
            moved = true;
        }
        previous = current;
        i++;

    }

    if(!moved) 
    {
        previous->InsertAfter(song);
    }

    cout << song->GetSongName() << " moved to position " << target_pos << endl;
    cout << endl;
}

void print_playlist(string title, PlaylistNode * node)
{
    PlaylistNode * current = node;
    int size = 0;

    cout << title << " - OUTPUT FULL PLAYLIST" << endl;
    while(current->GetNext() != nullptr)
    {
        cout << size + 1 << "." << endl;
        current = current->GetNext();
        current->PrintPlaylistNode();
        cout << endl;
        size++;
    }

    if (size <= 0)
    {
        cout << endl;
        cout << "Playlist is empty" << endl;
        cout << endl;
    }

    


}

void specific_art(PlaylistNode * node)
{
    PlaylistNode * current = node;
    string artist;
    cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
    cout << "Enter artist's name: " << endl;
    cin.ignore();
    getline(cin, artist);
    cout << endl;
    int i = 1;
    while(current->GetNext() != nullptr)
    {
        current = current->GetNext();
        
        if(current->GetArtistName() == artist)
        {
            cout << i << "." << endl;
            current->PrintPlaylistNode();
            cout << endl;
        }
        i++;
    }

}

void total_play(PlaylistNode * node)
{
    cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
    int seconds = 0;
    PlaylistNode * current = node;

    while(current->GetNext() != nullptr)
    {
        current = current->GetNext();

        seconds += current->GetSongLength();
        
    }

    cout << "Total time: " << seconds << endl;
    cout << endl;
}

void execute_option(char option, string title, PlaylistNode * node)
{
    switch(option)
    {
        case 'a':
            add_song(node);
            break;
        case 'd':
            remove_song(node);
            break;
        case 'c':
            change_position(node);
            break;
        case 's':
            specific_art(node);
            break;
        case 't':
            total_play(node);
            break;
        case 'o':
            print_playlist(title, node);
        
            break;
    }
}   

int main()
{
    PlaylistNode * head = new PlaylistNode();
    string playlist_name;

    cout << "Enter playlist's title:" << endl;
    getline(cin , playlist_name);
    


    char option = 'z';

    
    
    while(option != 'q')
    {
        PrintMenu(playlist_name);
        cout << endl;

        cout << "Choose an option:" << endl;
        cin >> option;
        while(!valid_option(option))
        {
            cout << "Choose an option:" << endl;
            cin >> option;
        }
        execute_option(option, playlist_name, head);

        
    }
    return 0;
}