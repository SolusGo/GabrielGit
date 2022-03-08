#ifndef PLAYLISTNODEH
#define PLAYLISTNODEH

#include <string>
#include <iostream>

using namespace std;
class PlaylistNode
{
    public:
        PlaylistNode();
        PlaylistNode(string uniqueID, string songName, string artistName, int songLength);
        //Mutators
        void InsertAfter(PlaylistNode * node);
        void SetNext(PlaylistNode * node);

        //Getters 
        string GetID();
        string GetArtistName();
        string GetSongName();
        int GetSongLength();
        PlaylistNode* GetNext();

        void PrintPlaylistNode();

    private:
        string uniqueID;
        string songName;
        string artistName;
        int songLength;
        PlaylistNode* nextNodePtr;
        


};


#endif