NAME    = Span

CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS    = Main.cpp Span.cpp
OBJS    = $(SRCS:%.cpp=obj/%.o)

INC     = -I.

obj/%.o: %.cpp
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all
