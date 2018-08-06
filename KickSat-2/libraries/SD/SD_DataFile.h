// sd_log.h - Library for reading from and writing to the log on the SD card

#include <SD.h>

#ifndef SD_DATAFILE_h
#define SD_DATAFILE_h

class SD_DataFile {
public:
  SD_DataFile(uint16_t dw, String fn);
  bool writeDataEntry(byte* data);
  bool readDataEntry(int index, byte* buf);
  bool readLineIndex(int lineNum, int index, int len, byte* buf);
  void refresh();

  // member variables
  uint16_t _dataWidth;
  uint16_t _numEntries;
  String _fileName;
  File _dataFile;
};

#endif
