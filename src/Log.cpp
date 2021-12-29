#include <iostream>
using namespace std;

class Log
{
public:
    enum Level
    {
        LogLevelError = 0,
        LogLevelWarning,
        LogLevelInfo,

    };

private:
    Level m_LogLevel = LogLevelInfo;

public:
    void setLevel(Level level)
    {
        m_LogLevel = level;
    }

    void error(const char *message)
    {
        if (m_LogLevel >= LogLevelError)
            cout << "[ERROR]: " << message << endl;
    }
    void warn(const char *message)
    {
        if (m_LogLevel >= LogLevelWarning)
            cout << "[WARNING]: " << message << endl;
    }

    void info(const char *message)
    {
        if (m_LogLevel >= LogLevelInfo)
            cout << "[INFO ]: " << message << endl;
    }
};