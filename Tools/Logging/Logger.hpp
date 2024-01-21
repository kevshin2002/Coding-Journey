/*
	Created By Kevin Shin
	Logger.hpp
*/

#ifndef Logger_hpp
#define Logger_hpp

#include <type_traits>
#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

namespace tool {
	class Logger {
	public:
		template <typename Folder, typename FileName>
		static Logger& instance(Folder&& aFolder, FileName&& aName) {
			static_assert(std::is_same<std::decay_t<Folder>, std::string>::value || std::is_same<std::decay_t<Folder>, const char*>::value, "Path must be a string or a char*");

			static std::string thePath = std::string(std::forward<Folder>(aFolder)) + "/" +  std::forward<FileName>(aName);
			static std::fstream theStream(thePath, std::fstream::out);

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

	protected:
		Logger(std::ostream& anOut) : output(anOut) {}
		Logger(const Logger& aLogger) = delete;
		~Logger() {}

	private:
		std::ostream& output;
	};
}

// FIX THIS
// DOESN"T ALLOW USER TO SET PATH
// CONSIDER ADDING MULTIPLE LOGGERS SUPPORT

#define __LOGGING__
#ifdef __LOGGING__
	static tool::Logger& theLogger = tool::Logger::instance("C:\\Users\\herb0\\OneDrive\\Desktop\\Github\\Coding Journey\\Tools\\Logging\\Files", "test1.txt");
	#define LOG_INFO(aMsg) theLogger.info(aMsg);
	#define LOG_WARN(aMsg) theLogger.warn(aMsg);
#else
	#define LOG_INFO(aMsg)
	#define LOG_WARN(aMsg)
#endif

#endif // Logger.hpp