/*
  ==============================================================================

   This file is part of the eJUCE library
   which is based on Raw Material Software ltd. JUCE

   eJUCE can be redistributed and/or modified under the terms of the
   GNU General Public License, as published by the Free Software Foundation;
   either version 2 of the License, or (at your option) any later version.

   eJUCE is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with eJUCE; if not, visit www.gnu.org/licenses or write to the
   Free Software Foundation, Inc., 59 Temple Place, Suite 330, 
   Boston, MA 02111-1307 USA

   @author	Asnaghi Lucio

  ==============================================================================
*/

#ifndef __ANGELJUICE_ABOUTPAGE_HEADER__
#define __ANGELJUICE_ABOUTPAGE_HEADER__

#include "../AngelJuice.h"
#include "../AngelJuice_config.h"

//==============================================================================
class AboutPage : public Component
{
public:

    AboutPage();
    ~AboutPage();

    void paint (Graphics& g);
    void resized();

protected:

    HyperlinkButton* link;
    Image* logo;
    TextLayout text1, text2;
};

#endif // __ANGELJUICE_ABOUTPAGE_HEADER__