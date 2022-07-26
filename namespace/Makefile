NAME	=	namespaces
CXX		=	clang++
CXXFLAG	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp

OBJ		=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $@

.PHONY	:	all
all		:	$(NAME)

.PHONY	:	clean
clean	:
			@rm -rf $(OBJ)

.PHONY	:	fclean
fclean	:	clean
			@rm -rf $(NAME)

.PHONY	:	re
re		:	fclean
			make all

