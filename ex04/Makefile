# --- Couleurs ---
GREEN       = \033[1;32m
RED         = \033[1;31m
BLUE        = \033[1;34m
YELLOW      = \033[1;33m
RESET       = \033[0m
#---------------------

NAME = replace
NAME_TEST = testeur

CFLAGS = c++ -Wall -Wextra -Werror -std=c++98 -Iinclude

OBJ_DIR = objs/
SRC_DIR = src/

SRC_FILES = main.cpp stream.cpp errors.cpp read_replace.cpp

OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
			@printf "$(GREEN)[EX04] Linking...$(RESET)\n"
			@$(CFLAGS) $(OBJS) -o $(NAME)
			@printf "$(GREEN)[EX04] $(NAME) compilation success!$(RESET)\n\n"
			$(HEADER)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
			@mkdir -p $(OBJ_DIR)
			@printf "$(YELLOW)[EX04] Compiling : $< $(RESET)\n"
			@$(CFLAGS) -c $< -o $@

test : $(NAME)
			@printf "$(GREEN)[EX04] Compiling testeur...$(RESET)\n"
			@$(CFLAGS) src/tests.cpp -o $(NAME_TEST)
			@printf "$(GREEN)[EX04] Running tests...$(RESET)\n\n"
			@./$(NAME_TEST)	

clean :
			@rm -rf $(OBJ_DIR)
			@printf "$(RED)[EX04] Object files cleaned!$(RESET)\n"

fclean : clean
			@rm -f $(NAME)
			@rm -f $(NAME_TEST)
			@rm -f *.replace test*.txt
			@printf "$(RED)[EX04] Executable $(NAME) and files created cleaned.$(RESET)\n"

re  : fclean all

.PHONY : fclean re clean test