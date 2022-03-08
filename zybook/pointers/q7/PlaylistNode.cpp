#include "PlaylistNode.h"

PlaylistNode::PlaylistNode()
{
    uniqueID = "none";
    songName = "none";
    artistName = "none";
    songLength = 0;
    nextNodePtr = nullptr;
}



PlaylistNode::PlaylistNode(string uniqueID, string songName, string artistName, int songLength)
{
    this->uniqueID = uniqueID;
    this->songName = songName;
    this->artistName = artistName;
    this->songLength = songLength;
}

void PlaylistNode::InsertAfter(PlaylistNode * node)
{
    PlaylistNode * temp = nextNodePtr;
    nextNodePtr = node;
    node->SetNext(temp);
}

void PlaylistNode::SetNext(PlaylistNode * node)
{
    nextNodePtr = node;
}

string PlaylistNode::GetID()
{
    return this->uniqueID;
}

string PlaylistNode::GetArtistName()
{
    return this->artistName;
}

string PlaylistNode::GetSongName()
{
    return this->songName;
}

int PlaylistNode::GetSongLength()
{
    return this->songLength;
}

PlaylistNode * PlaylistNode::GetNext()
{
    return nextNodePtr;
}



void PlaylistNode::PrintPlaylistNode()
{
    cout << "Unique ID: " << uniqueID << endl;
    cout << "Song Name: " << songName << endl;
    cout << "Artist Name: " << artistName << endl;
    cout << "Song Length (in seconds): " << songLength << endl;
}