#ifndef Track_H
#define Track_H

#include <string>

class Track
{
    public:
        Track(std::string url);
        ~Track();

        std::string getUrl();
        std::string getName();
        std::string getAuthor();
        int64_t getLength();
        std::string getPreviewPath();

    private:
        std::string url_;
        std::string name_;
        std::string author_;
        int64_t length_;
        std::string previewPath_;
};

#endif
