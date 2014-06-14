#ifndef DOWNLOADER_H_INCLUDED
#define DOWNLOADER_H_INCLUDED

int GetFromInternet_MultiFiles(const char	**URLs,
							   const char	*File,
							   int			RetryInterval,
							   int			RetryTimes,
							   void			(*ErrorCallBack)(int ErrorCode, const char *URL, const char *File),
							   void			(*SuccessCallBack)(const char *URL, const char *File)
							   );

int GetFromInternet_SingleFile(const char	*URL,
							   const char	*File,
							   BOOL			Append,
							   int			RetryInterval,
							   int			RetryTimes,
							   void			(*ErrorCallBack)(int ErrorCode, const char *URL, const char *File),
							   void			(*SuccessCallBack)(const char *URL, const char *File)
							   );

int GetFromInternet_Base(const char *URL, const char *File, BOOL Append);

#endif // DOWNLOADER_H_INCLUDED
