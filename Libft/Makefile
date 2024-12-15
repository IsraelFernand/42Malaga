# Nombre de la librería
NAME = libft.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y objetos
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
       ft_strnstr.c ft_toupper.c ft_tolower.c ft_atoi.c ft_calloc.c \
       ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
       ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

# Regla principal para compilar la librería
all: $(NAME)

# Crear la librería
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Librería $(NAME) creada con éxito."

# Eliminar los archivos objeto
clean:
	@rm -f $(OBJS)
	@echo "Archivos objeto eliminados."

# Eliminar los archivos objeto y la librería
fclean: clean
	@rm -f $(NAME)
	@echo "Librería $(NAME) eliminada."

# Reconstruir la librería
re: fclean all

# Comando phony para evitar conflictos con archivos del mismo nombre
.PHONY: all clean fclean re
