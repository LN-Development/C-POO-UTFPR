#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class snakeBase
{
    private:

        bool gameStart;
        int snakeId;
        int snakeSize;
        int snakeRecord;
        int totalPoints;
        int roundPoints;
        int userId;
        int progressSave;
        std::string userName;
        std::string snakeName;
        std::string saveName;

    public:

        void setGameStart(bool auxGameStart)
            {
                this->gameStart = auxGameStart;
            }

        void setSnakeId (int auxSnakeId)
            {
                this->snakeId = auxSnakeId;
            }
         void setSnakeId (int auxSnakeId)
            {
                this->snakeId = auxSnakeId;
            }
        void setSnakeSize (int auxSnakeSize)
            {
                this->snakeSize = auxSnakeSize;
            }
        void setSnakeRecord (int auxSnakeRecord)
            {
                this->snakeRecord = auxSnakeRecord;
            }
        void setTotalPoints (int auxTotalPoints)
            {
                this->totalPoints = auxTotalPoints;
            }
        void setRoundPoints (int auxRoundPoints)
            {
                this->totalRound = auxRoundPoints;
            }
        void setUserId (int auxUserId)
            {
                this->userId = auxUserId;
            }
        void setProgressSave (int auxProgressSave)
            {
                this->progressSave = auxProgressSave;
            }
        void setUserName(const std::string& auxUserName) 
            {
                 this->userName = auxUserName;
            }
        void setSnakeName(const std::string& auxSnakeName) 
            {
                this->snakeName = auxSnakeName;
            }

        void setSaveName(const std::string& auxSaveName) 
            {
                this->saveName = auxSaveName;
            }




};

#endif // CLASSES_H_INCLUDED
