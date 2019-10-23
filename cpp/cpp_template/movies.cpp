#include <iostream>
#include <vector>

class Movie {
public:
    std::string m_title{""};
    int m_year{1990};
    float m_rating{0};
    std::vector<std::string> m_actors {};
    std::string m_genre{"horror"};

    void print() {
        std::cout << m_title << m_year << std::endl;
    }
    Movie (std::string title, int year, float rating, std::vector<std::string> actors, std::string genre) :
        // Member initialization list (Avoid constructing twice)
        m_title(title), m_year(year), m_rating(rating), m_actors(actors),
        m_genre(genre)
    {

    }

    virtual ~Movie() {

    }
};


int main(int argc, char const *argv[])
{
    Movie m1("Monty Python and the Holy Grail", 
            1979, 8.5, {"Graham Chapman", "John Cleece"}, "Comedy");
    Movie m2("Alien", 1986, 8,6, {"Sigony Weiver", "Alien"}, "Horror");
    std::cout << "hello world" << std::endl;
    return 0;
}