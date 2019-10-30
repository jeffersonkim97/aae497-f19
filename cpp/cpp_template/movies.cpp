#include <iostream>
#include <vector>
<<<<<<< HEAD
=======
#include <list>
#include <memory>
>>>>>>> eb4087acefb7e3964fbf7138371e79e42431d5e2

class Movie {
public:
    std::string m_title{""};
<<<<<<< HEAD
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
=======
    int m_year{1900};
    float m_rating{0};
    std::vector<std::string> m_actors {};
    std::string m_genre{"horror"};
    void print() {
        std::cout << m_title << m_year << std::endl;
    }
    Movie(std::string title, int year, float rating,
        std::vector<std::string> actors, std::string genre) :
        // member initialization list (a way to avoid constructing twice)
        m_title(title), m_year(year), m_rating(rating), m_actors(actors),
        m_genre(genre)
    {
    }
    virtual ~Movie() {
    }
};

int main(int argc, char const *argv[])
{
    auto m1 = std::make_shared<Movie>("Monty Python and the Holy Grail",
        1975, 8.5, {"Graham Chapman", "John Cleese"}, "Comedy");
    auto m2 = std::maked_shared<Movie>("Aliens",
        1986, 8.4, {"Sigourney Weaver", "Newt"}, "Horror");

    std::list<Movie> database;
    database.insert(m1);
    database.insert(m2);


    std::cout << "hello world" << std::endl;
    /* code */
>>>>>>> eb4087acefb7e3964fbf7138371e79e42431d5e2
    return 0;
}