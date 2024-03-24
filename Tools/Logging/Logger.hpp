/*
	Created By Kevin Shin
	Logger.hpp

In order to use this logger, you must instantiate it within your block as LOGGER(aPath, aFile, Flags)
The types are as follows:
aPath: specifies the folder path and must be a string, const char*, or a fs::path type.
aFile: specifies the file name and must be either a string or const char*.
Flags: These must be compatible to ios_base to open any type of streams.file.

*/

#ifndef Logger_hpp
#define Logger_hpp

#include <type_traits>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <unordered_map>

namespace Debug {
	namespace fs = std::filesystem;

	template<typename Folder>
	using isValidFolder = std::enable_if_t<
		std::is_same<std::decay_t<Folder>, std::string>::value ||
		std::is_same<std::decay_t<Folder>, fs::path>::value || 
		std::is_same<std::decay_t<Folder>, const char*>::value,
		bool
	>;

	template<typename FileName>
	using isValidFile = std::enable_if_t<
		std::is_same<std::decay_t<FileName>, std::string>::value ||
		std::is_same<std::decay_t<FileName>, const char*>::value,
		bool
	>;

	class Logger {
	public:
		Logger(const Logger&) = delete;
		Logger& operator=(const Logger&) = delete;

		template<typename Folder, typename FileName, typename FileFlags = std::ios_base::openmode,
			isValidFolder<Folder> = true,
			isValidFile<FileName> = true>
		static Logger& instance(Folder&& aFolder, FileName&& aName, FileFlags aFlags) {
			std::string thePath = std::string(std::forward<Folder>(aFolder)) + "/" + std::forward<FileName>(aName);
			static std::fstream theStream(thePath, aFlags);
			static Logger theInstance(theStream);
			return theInstance;
		}
		std::ostream& info(const std::string_view& aMessage) {
			output << "INFO: " << aMessage << "\n";
			return output;
		}
		template <typename Type1>
		std::ostream& info(const Type1& aMsg1, const Type1& aMsg2) {
			output << "INFO: " << aMsg1 << " " << aMsg2 << "\n";
			return output;
		}

		template <typename Type1, typename Type2>
		std::ostream& info(const Type1& aMsg1, const Type2& aMsg2) {
			output << "INFO: " << aMsg1 << " " << aMsg2 << "\n";
			return output;
		}

		std::ostream& warn(const std::string_view& aMessage) {
			output << "WARN: " << aMessage << "\n";
			return output;
		}

		template <typename Type1>
		std::ostream& warn(const Type1& aMsg1, const Type1& aMsg2) {
			output << "WARN: " << aMsg1 << " " << aMsg2 << "\n";
			return output;
		}

		template <typename Type1, typename Type2>
		std::ostream& warn(const Type1& aMsg1, const Type2& aMsg2) {
			output << "WARN: " << aMsg1 << " " << aMsg2 << "\n";
			return output;
		}
	private:
		std::ostream& output;
		Logger(std::ostream& anOut) : output(anOut) {}
	};
}

#define __LOGGING__
#ifdef __LOGGING__
    #define LOGGER(aPath, aFile, aFlags) static Debug::Logger& theLogger = Debug::Logger::instance(aPath, aFile, aFlags);
	#define LOG_INFO(aMsg) theLogger.info(aMsg);
	#define LOG_WARN(aMsg) theLogger.warn(aMsg);
#else
	#define LOG_INFO(aMsg)
	#define LOG_WARN(aMsg)
#endif

#endif // Logger.hpp