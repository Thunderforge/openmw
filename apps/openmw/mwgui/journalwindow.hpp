#ifndef MWGUI_JOURNAL_H
#define MWGUI_JOURNAL_H

#include <string>

#include "windowbase.hpp"
#include "imagebutton.hpp"

namespace MWGui
{
    class JournalWindow : public WindowBase
    {
        public:
            JournalWindow();
            virtual void open();
            virtual void close();

        private:
            void displayLeftText(std::string text);
            void displayRightText(std::string text);


            /**
            *Called when next/prev button is used.
            */
            void notifyNextPage(MyGUI::Widget* _sender);
            void notifyPrevPage(MyGUI::Widget* _sender);

            MyGUI::EditBox* mLeftTextWidget;
            MyGUI::EditBox* mRightTextWidget;
            MWGui::ImageButton* mPrevBtn;
            MWGui::ImageButton* mNextBtn;
            std::vector<std::string> mLeftPages;
            std::vector<std::string> mRightPages;
            int mPageNumber; //store the number of the current left page
    };

}

#endif
