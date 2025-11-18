# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vasari <vasari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 14:30:00 by student           #+#    #+#              #
#    Updated: 2025/11/18 22:17:08 by vasari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# nom de la lib
NAME		= libft.a

# compilateur + flags
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

# couleurs pour faire joli (optionnel mais ça fait pro)
GREEN		= \033[0;32m
RED			= \033[0;31m
BLUE		= \033[0;34m
RESET		= \033[0m

# tous mes fichiers sources (partie obligatoire)
SRCS		= ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_strlen.c \
			  ft_memset.c \
			  ft_bzero.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_toupper.c \
			  ft_tolower.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strncmp.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_strnstr.c \
			  ft_atoi.c \
			  ft_calloc.c \
			  ft_strdup.c \
			  ft_substr.c \
			  ft_strjoin.c \
			  ft_strtrim.c \
			  ft_split.c \
			  ft_itoa.c \
			  ft_strmapi.c \
			  ft_striteri.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c

# fichiers bonus (listes chainees)
BONUS_SRCS	= ft_lstnew_bonus.c \
			  ft_lstadd_front_bonus.c \
			  ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c \
			  ft_lstadd_back_bonus.c \
			  ft_lstdelone_bonus.c \
			  ft_lstclear_bonus.c \
			  ft_lstiter_bonus.c \
			  ft_lstmap_bonus.c

# conversion .c -> .o
OBJS		= $(SRCS:.c=.o)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

# règle par défaut
all: $(NAME)

# créer la bibliothèque
$(NAME): $(OBJS)
	@echo "$(BLUE)🔨 Compilation des objets...$(RESET)"
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)✅ $(NAME) créée avec succès !$(RESET)"

# compiler les .c en .o
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)📁 Compilation de $<$(RESET)"

# règle bonus
bonus: $(OBJS) $(BONUS_OBJS)
	@echo "$(BLUE)🎁 Ajout des fonctions bonus...$(RESET)"
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "$(GREEN)✅ Libft avec bonus terminée !$(RESET)"

# nettoyage des .o
clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "$(RED)🧹 Fichiers objets supprimés$(RESET)"

# nettoyage complet
fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)🗑️  $(NAME) supprimée$(RESET)"

# recompiler from scratch
re: fclean all
	@echo "$(GREEN)♻️  Recompilation terminée !$(RESET)"

# test rapide (optionnel - perso j'aime bien)
test: $(NAME)
	@echo "$(BLUE)🧪 Test de compilation...$(RESET)"
	@$(CC) $(CFLAGS) -L. -lft test.c -o test_libft 2>/dev/null && echo "$(GREEN)✅ Test OK$(RESET)" || echo "$(RED)❌ Erreur de test$(RESET)"
	@rm -f test_libft

# pour éviter les conflits avec des fichiers du même nom
.PHONY: all bonus clean fclean re test