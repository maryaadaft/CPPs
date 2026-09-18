CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCs = megaphone.cpp
OBJs = $(SRCs:.cpp=.o)
Name = megaphone

all:$(Name)
$(Name) : $(OBJs)
	$(CXX) $(CXXFLAGS) -o $(Name) $(OBJs)

clean:
	rm -rf $(OBJs)

fclean: clean
	rm -rf $(Name)

re: fclean all

.PHONY: all clean fclean re