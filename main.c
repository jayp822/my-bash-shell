#include <stdio.h>
#include <signal.h>
#include <string.h>

#define BUFFSIZE 4096

  while (1)
  {
    char* curr_directory = getcwd(cwd_buffer, sizeof(cwd_buffer));
    char *substring_of_home = strstr(curr_directory, home);
        printf("%c", substring_of_home[i]);
      }
      printf("%s", curr_directory);
    }
    n = read(STDIN_FILENO, cmd, BUFFSIZE);

    {
      for(int i = 0; token != NULL; i++)
      {
        cmd_argv[i] = token;
        token = strtok(NULL, " ");
      }
      if(strcmp(cmd,"exit") == 0)
      {
        exit(EXIT_SUCCESS);
      }else if(strcmp(cmd_argv[0], "cd") == 0)
        if(chdir(cmd_argv[1]) == -1) perror("chdir");
      }else{
      {
        for(int i = 0; cmd_argv[i] != NULL; i++)
        {
          if(strcmp(cmd_argv[i], "<") == 0)
          {
            // dup in (<)
            int fd_in = open(cmd_argv[i + 1], O_RDONLY);
          }else if(strcmp(cmd_argv[i], ">") == 0)
          {
            // dup out (>)
            int fd_out = open(cmd_argv[i + 1], O_WRONLY | O_CREAT | O_TRUNC, 0644);
          }else if(strcmp(cmd_argv[i], ">>") == 0)
          {
            if(fd_out == -1) perror("open");
            if(dup2(fd_out, STDOUT_FILENO) == -1) perror("dup2");
          }
        }

        int arrow_found = 0;
          if(strcmp(cmd_argv[i], "<") == 0 || strcmp(cmd_argv[i], ">") == 0 || strcmp(cmd_argv[i], ">>") == 0)
          {
            arrow_found = 1;
          }
          if(arrow_found)
          {
            cmd_argv[i] = NULL;
          }
        }
        if(execvp(cmd_argv[0], cmd_argv) == -1)
        {
          perror("execvp");
          exit(EXIT_FAILURE);
        }
        exit(0);
      }else
      {
        int status;
        wait(&status);
      }
    }
    } // if
  } // while
} // main
