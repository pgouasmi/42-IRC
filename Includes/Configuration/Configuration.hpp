#ifndef CONFIG_HPP
	#define CONFIG_HPP
	#include <string>
	#include <list>
	#include "ConfigurationSection.hpp"
	#include "ConfigurationExceptions.hpp"

	class Configuration
	{
		public:
			Configuration(const std::string& file);
			~Configuration();
			void load() throw (ConfigurationIOException);
			void addSection(ConfigurationSection *section);
			void printSections();
			ConfigurationSection* getSection(const std::string& name);
			static Configuration* getInstance(const std::string& file = "");
		private:
			std::string file;
			std::list<ConfigurationSection*> sections;
			static Configuration* instance;

	};
#endif
