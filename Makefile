CC		= cc
CCFLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
AR		= ar
ARFLAGS = rc

MANDATORY	= ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_strlen ft_isalpha ft_isdigit ft_isalnum \
				ft_isascii ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strlcpy ft_strlcat ft_strnstr \
				ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_putchar_fd ft_putstr_fd \
				ft_putendl_fd ft_putnbr_fd ft_striteri

M_OBJ	= $(MANDATORY:=.o)
NAME	= libft.a

all: $(NAME)

$(NAME): $(M_OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(M_OBJ)


%.o: %.c libft.h
	$(CC) $(CCFLAGS) $(INCLUDE) -o $@ -c $<

clean:
	rm -f $(M_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean 