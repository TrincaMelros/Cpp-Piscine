MAKEFLAGS	+=	--quiet

			# Library Name #
NAME		=
SOFTWARE	=	software

			# Mandatory Variables #
SRCS			=	./*.cpp

			# Compiling Variables #
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

			# Color Variables #
GREEN		= \e[0;32m
RED			= \e[0;31m
YELLOW		= \e[0;33m
RESET		= \e[0m

all: $(SOFTWARE)

$(NAME): all

$(SOFTWARE): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(SOFTWARE)
	@printf "[$(GREEN)SUCCESS$(RESET)] SOFTWARE compiled.\n"

clean:
	@ $(RM) $(SOFTWARE)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(SOFTWARE)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
