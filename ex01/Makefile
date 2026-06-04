# --- Couleurs ---
GREEN       = \033[1;32m
RED         = \033[1;31m
BLUE        = \033[1;34m
YELLOW      = \033[1;33m
RESET       = \033[0m
#---------------------

NAME = Zombie_Army
CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

OBJ_DIR = objs/

SRC_FILES = main.cpp ZombieHorde.cpp Zombie.cpp

OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
			@printf "$(GREEN)[ZOMBIE] Linking...$(RESET)\n"
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
			@printf "$(GREEN)[ZOMBIE] $(NAME) compilation success!$(RESET)\n\n"
			$(HEADER)

$(OBJ_DIR)%.o : %.cpp
			@mkdir -p $(dir $@)
			@printf "$(YELLOW)[ZOMBIE] Compiling : $< $(RESET)\n"
			@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
			@$(RM) -rf $(OBJ_DIR)
			@printf "$(RED)[ZOMBIE] Object files cleaned!$(RESET)\n"

fclean : clean
			@$(RM) -f $(NAME)
			@printf "$(RED)[ZOMBIE] Executable $(NAME) cleaned.$(RESET)\n"

re : fclean all

.PHONY : fclean re cleanrm