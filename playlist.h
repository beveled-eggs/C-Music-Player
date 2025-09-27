#ifndef __PLAYLIST__
#define __PLAYLIST__

#include <iostream>
#include <string>

class Playlist {
    public:
        Playlist(std::string new_name) : playlist_name{new_name} {};
        Playlist() : playlist_name{"New Playlist"} {};

        std::string get_playlist_name() {return playlist_name;}
        
    private:
    std::string playlist_name;

};

#endif //__PLAYLIST__