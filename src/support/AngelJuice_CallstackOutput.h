/*
  ==============================================================================

   This file is part of AngelJuice

   which is based on kRAkEn/gORe eJUCE library
   which uses
               Raw Material Software ltd. JUCE library
               AngelCode AngelScript scripting library

   AngelJuice can be redistributed and/or modified under the terms of the
   GNU General Public License, as published by the Free Software Foundation;
   either version 2 of the License, or (at your option) any later version.

   AngelJuice is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with eJUCE; if not, visit www.gnu.org/licenses or write to the
   Free Software Foundation, Inc., 59 Temple Place, Suite 330, 
   Boston, MA 02111-1307 USA

   @coder	Asnaghi Lucio a.k.a. kRAkEn/gORe

  ==============================================================================
*/

#ifndef __ANGELJUICE_CALLSTACKOUTPUT_HEADER__
#define __ANGELJUICE_CALLSTACKOUTPUT_HEADER__


#include "AngelJuice_DebugOutput.h"


//==============================================================================
class CallstackOutputComponent : public Component
{
public:

	CallstackOutputComponent ();
	~CallstackOutputComponent ();

	void resized ();

	void appendCallstackText (const String& text);
	void replaceCallstackText (const String& text);
	void clearCallstackText ();

	void appendVariablesText (const String& text);
	void replaceVariablesText (const String& text);
	void clearVariablesText ();

protected:

	StretchableLayoutManager horizontalLayout;
	StretchableLayoutResizerBar* verticalDividerBar;

	DebugOutputComponent* callstackTextEditor;
	DebugOutputComponent* variablesTextEditor;
};


#endif // __ANGELJUICE_CALLSTACKOUTPUT_HEADER__
