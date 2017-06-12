#ifndef KIFT_H
 #define KIFT_H 

# include <string.h>
# include <pocketsphinx.h>
# include <unistd.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdarg.h>

#define NB_INSTRUCTIONS 5
#define TRANSCRIPTION_FILE "../tutorial/instruction.transcription"
#define FILEIDS_FILE "../tutorial/instruction.fileids"
#define LOG_FILE "/log.txt"
#define ID_INSTRUCTION_FILE "/response_instruction.txt"
#define NEXT_TRAIN_FILE "/response_train.txt"
#define END_OF_TRAIN  "END OF TRAIN"
#define USER_FILE_PATH "../logs/"

typedef struct s_cmd
{
  int id;
  char *key_words;
  char *train_sentence;
  int is_train;
}              t_cmd;

const char *get_hyp(char *argv[]);

#endif