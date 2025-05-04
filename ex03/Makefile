NAME = a.out
CPPC = c++
CPPARG = -Wall -Wextra -Werror -std=c++98
SRC_DIR = src
OBJ_DIR = object
SRCs = main.cpp Fixed.cpp
OBJ_PATH = $(addprefix $(OBJ_DIR)/,$(SRCs:.cpp=.o))
SRC_PATH = $(addprefix $(SRC_DIR)/,$(SRCs))
INCLUDE_PATH = -Iinclude

$(NAME): $(OBJ_PATH)
	$(CPPC) $(CPPARG) $(OBJ_PATH) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CPPC) $(CPPARG) $(INCLUDE_PATH) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ_PATH)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
