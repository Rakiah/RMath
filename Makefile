# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkabbas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/18 21:24:52 by bkabbas           #+#    #+#              #
#    Updated: 2016/06/13 19:46:14 by Rakiah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = librmath.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address
OPTIMIZE = yes
PROF = no
DEBUG = no

# Paths
PATH_HEADERS = includes
PATH_SRC = sources
PATH_SUB = m4f v4f v3f v2f .
PATH_OBJ = objects

# Debug
ifeq ($(DEBUG), yes)
	CFLAGS += -g -O0
endif

# Prof
ifeq ($(PROF), yes)
	CFLAGS += -pg
endif

# Optimization
ifeq ($(OPTIMIZE), yes)
	CFLAGS += -O3
endif

CFLAGS += -I

vpath %.c $(addprefix $(PATH_SRC)/,$(PATH_SUB))

# Sources
M4F = m4f_manipulations.c \
      m4f_operators.c \
      m4f_adjugate.c \
      m4f_initializers.c

V4F = v4f_manipulations.c \
      v4f_operators.c \
      v4f_operators_new.c \
      v4f_operators_float.c \
      v4f_utils.c

V3F = v3f_manipulations.c \
      v3f_operators.c \
      v3f_operators_new.c \
      v3f_operators_float.c \
      v3f_utils.c

V2F = v2f_manipulations.c \
      v2f_operators.c \
      v2f_operators_new.c \
      v2f_operators_float.c \
      v2f_utils.c

UTILS = ternaries.c \
		clamps.c

SOURCES += $(M4F)
SOURCES += $(V4F)
SOURCES += $(V3F)
SOURCES += $(V2F)
SOURCES += $(UTILS)

INCLUDES += rmath.h
INCLUDES += rmath_structs.h
INCLUDES += rmath_typedefs.h
INCLUDES += rmath_utils.h
INCLUDES += rmath_v2f.h
INCLUDES += rmath_v3f.h
INCLUDES += rmath_v2f.h
INCLUDES += rmath_m4f.h

# Headers
HEADERS = $(addprefix $(PATH_HEADERS)/, $(INCLUDES))

# Objects
OBJECTS += $(addprefix $(PATH_OBJ)/, $(M4F:%.c=%.o))
OBJECTS += $(addprefix $(PATH_OBJ)/, $(V4F:%.c=%.o))
OBJECTS += $(addprefix $(PATH_OBJ)/, $(V3F:%.c=%.o))
OBJECTS += $(addprefix $(PATH_OBJ)/, $(V2F:%.c=%.o))
OBJECTS += $(addprefix $(PATH_OBJ)/, $(UTILS:%.c=%.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	@echo library linked correctly

$(OBJECTS): $(HEADERS) | $(PATH_OBJ)
$(OBJECTS): $(PATH_OBJ)/%.o: %.c
	$(CC) $(CFLAGS) $(PATH_HEADERS) -o $@ -c $<

$(PATH_OBJ):
	@-mkdir -p $@

clean:
	@rm -rf $(PATH_OBJ)
	@echo removed binary files

fclean: clean
	@rm -f $(NAME)
	@echo removed library

re: fclean all

.PHONY: all clean fclean re
