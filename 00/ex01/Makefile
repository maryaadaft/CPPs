CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCs = phonebook.cpp
OBJs = $(SRCs:.cpp=.o)
Name = phonebook

all:$(Name)
$(Name) : $(OBJs)
	$(CXX) $(CXXFLAGS) -o $(Name) $(OBJs)

clean:
	rm -rf $(OBJs)

fclean: clean
	rm -rf $(Name)

re: fclean all

.PHONY: all clean fclean re