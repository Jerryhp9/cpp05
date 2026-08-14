CXX = g++
CXXFLAGS = -g3 -Wall -Werror -Wextra -std=c++98
NAME = Materia
RM = rm -rf

SRC = main.cpp Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
		@$(CXX) $(CXXFLAGS) -I. $(OBJ) -o $@

all: $(NAME)

%.o : %.cpp
		@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean flcean re