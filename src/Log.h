#pragma once


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
    void setLevel(Level level);
    void error(const char *message);
       void warn(const char *message);
    void info(const char *message);
};