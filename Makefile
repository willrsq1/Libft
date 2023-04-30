### COMPILATION ###
CC      = gcc
FLAGS  = -Wall -Wextra -Werror

### EXECUTABLE ###
NAME   = libft.a

### INCLUDES ###
OBJ_PATH  = objs
HEADER = .
SRC_PATH  = .

### SOURCE FILES ###

SOURCES	=			ft_atoi.c ft_isprint.c ft_power.c ft_strlcat.c ft_substr.c ft_bzero.c ft_itoa.c \
					ft_split.c ft_strlcpy.c ft_tolower.c ft_calloc.c ft_memchr.c ft_strchr.c ft_strlen.c \
					ft_toupper.c ft_isalnum.c ft_memcmp.c ft_strclen.c ft_strncmp.c ft_isalpha.c ft_memcpy.c \
					ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_isdigit.c ft_memset.c ft_strjoin.c \
					ft_strtrim.c ft_strmapi.c ft_power.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \
					ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
					ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

### OBJECTS ###

SRCS = $(addprefix $(SRC_PATH)/,$(SOURCES))
OBJS = $(addprefix $(OBJ_PATH)/,$(SOURCES:.c=.o))

### COLORS ###
NOC         = \033[0m
BOLD        = \033[1m
UNDERLINE   = \033[4m
BLACK       = \033[1;30m
RED         = \033[1;31m
GREEN       = \033[1;32m
YELLOW      = \033[1;33m
BLUE        = \033[1;34m
VIOLET      = \033[1;35m
CYAN        = \033[1;36m
WHITE       = \033[1;37m

### RULES ###

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^ 
	@echo "$(GREEN)Project successfully compiled"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HEADER)/*.h Makefile
	@$(CC) $(FLAGS) -c -o $@ $< 
	@echo "$(BLUE)Creating object file -> $(WHITE)$(notdir $@)... $(RED)[Done]$(NOC)"

clean:
	@echo "$(GREEN)Supressing libraries files$(CYAN)"
	@rm -f $(OBJ_PATH)/*.o

fclean:
	@echo "$(GREEN)Supressing libraries files$(CYAN)"
	@rm -f $(OBJ_PATH)/*.o
	@rm -f $(NAME)

bonus: $(all)

norminette:
	@norminette

re: fclean
	@$(MAKE) all

.PHONY: re fclean clean bonus norminette
