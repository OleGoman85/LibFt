
# Название вашей библиотеки
NAME = libft.a

# Компилятор
CC = cc

# Флаги компилятора
CFLAGS = -Wall -Wextra -Werror

# Список исходных файлов
SRC_FILES = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c \
ft_bzero.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_isprint.c ft_memcmp.c ft_memcpy.c ft_isdigit.c \
ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c 

# Преобразование имен файлов в объектные файлы
OBJ_FILES = $(SRC_FILES:.c=.o)

BONUS_FILES = ft_lstnew_bonus.c

OBJ_BONUS = $(BONUS_FILES:.c=.o)

# Правило для сборки объектных файлов
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

# Сборка библиотеки
$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean clean_bonus
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

#BONUS

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

clean_bonus:
	rm -f $(OBJ_BONUS)


# 1. **NAME**: Эта переменная устанавливает имя вашей целевой библиотеки. В данном случае, имя установлено как "libft.a".

# 2. **CC**: Эта переменная определяет компилятор, который будет использоваться для сборки кода. В данном случае, используется компилятор GCC (GNU Compiler Collection).

# 3. **CFLAGS**: Эта переменная определяет флаги компилятора, которые будут использоваться при компиляции кода. В данном случае, флаги `-Wall`, `-Wextra` и `-Werror` включены. `-Wall` и `-Wextra` включают предупреждения о потенциальных проблемах в коде, а `-Werror` преобразует предупреждения в ошибки, останавливая сборку при обнаружении предупреждений.

# 4. **SRC_DIR**: Эта переменная устанавливает путь к директории, где находятся ваши исходные файлы (например, .c файлы). В строке `SRC_DIR = ./src` переменная `SRC_DIR` определяет путь к директории, в которой находятся исходные файлы (source files) вашего проекта. То есть, это директория, где хранятся файлы с исходным кодом на языке программирования C.

# В данном случае, `SRC_DIR` установлено как "./src", что означает, что исходные файлы находятся в поддиректории "src" в текущей директории проекта. Это может быть полезным, если вы организуете ваш проект таким образом, чтобы код находился в отдельной директории для лучшей структурированности и читаемости.

# Пример: Если у вас есть файлы "file1.c" и "file2.c" с вашим кодом, то они будут находиться в директории "./src". Вы можете компилировать их, указывая путь к этой директории, например:

# ```bash
# gcc -o my_program $(SRC_DIR)/file1.c $(SRC_DIR)/file2.c
# ```

# Таким образом, `SRC_DIR` помогает организовать и структурировать ваш проект, особенно если в нём есть много исходных файлов.

# 5. **INCLUDES**: Эта переменная указывает путь к директории с заголовочными файлами вашей библиотеки (например, .h файлы). -I - это флаг компилятора, который используется для добавления директорий в список мест, где компилятор будет искать заголовочные файлы. В данном случае, -I ./includes означает, что компилятор будет искать заголовочные файлы в директории "./includes".

# 6. **SRC_FILES**: Эта переменная содержит список имен исходных файлов вашей библиотеки.

# 7. **OBJ_FILES**: Здесь используется переменная с именами объектных файлов, которые будут созданы из исходных файлов. Объектные файлы создаются путем замены расширения .c на .o.

# 8. **Правило для сборки объектных файлов**: Это правило описывает, как компилировать исходные файлы в объектные файлы. Оно использует переменные SRC_DIR, INCLUDES и CFLAGS для управления компиляцией.

# 9. **all**: Это цель (target) по умолчанию, которая будет выполнена при вызове `make` без указания цели. В данном случае, цель `all` зависит от цели `$(NAME)`, что означает, что для выполнения `all` сначала будет выполнена сборка библиотеки `$(NAME)`.

# 10. **$(NAME)**: Эта цель определяет, как собрать вашу библиотеку. Она зависит от объектных файлов `$(OBJ_FILES)` и использует команду `ar` для создания статической библиотеки с именем `$(NAME)`.

# 11. **clean**: Эта цель удаляет все объектные файлы, которые были созданы в процессе компиляции.

# 12. **fclean**: Эта цель удаляет как объектные файлы, так и целевую библиотеку.

# 13. **re**: Эта цель использует `fclean` для очистки проекта и затем пересобирает его снова.

# 14. **.PHONY**: Эта директива указывает на фиктивные цели, которые не являются файлами. Она гарантирует, что эти цели будут выполнены, даже если уже существует файл с таким именем. Это полезно для целей, которые выполняют действия, а не создают файлы.

# Таким образом, данный Makefile определяет правила для сборки вашей библиотеки, очистки проекта и других действий с вашим кодом. Вы можете запустить `make` с разными целями (например, `make all`, `make clean`, `make fclean`) в зависимости от вашего текущего задания.

# Запустить make в командной строке для компиляции и создания вашей библиотеки. Например:
# Для запуска команды make, вы обычно должны находиться в директории, где находится файл Makefile вашего проекта. Команда make будет искать файл Makefile в текущей директории и выполнит инструкции, указанные в этом файле.
