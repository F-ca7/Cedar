#ifndef OBDELTADATAHANDLER_H
#define OBDELTADATAHANDLER_H


namespace oceanbase
{
  namespace sql
  {
    class ObDeltaDataHandler
    {
      public:
        ObDeltaDataHandler();

        int read_delta_data();


        int commit_delta_data();

      private:
    };
  }
}

#endif // OBDELTADATAHANDLER_H
