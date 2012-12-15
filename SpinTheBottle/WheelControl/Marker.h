
/*
 
Disclaimer: IMPORTANT:  This Walnut Labs software is supplied to you by Walnut Labs. 
("Walnut Labs") in consideration of your agreement to the following
terms, and your use, installation, modification or redistribution of
this Walnut Labs software constitutes acceptance of these terms.  If you do
not agree with these terms, please do not use, install, modify or
redistribute this Walnut Labs software.

In consideration of your agreement to abide by the following terms, and
subject to these terms, Walnut Labs grants you a personal, non-exclusive
license, under Walnut Labs's copyrights in this original Walnut Labs software (the
"Walnut Labs Software"), to use, reproduce, modify and redistribute the Walnut Labs
Software, with or without modifications, in source and/or binary forms;
provided that if you redistribute the Walnut Labs Software in its entirety and
without modifications, you must retain this notice and the following
text and disclaimers in all such redistributions of the Walnut Labs Software.
Neither the name, trademarks, service marks or logos of Walnut Labs Inc. may
be used to endorse or promote products derived from the Walnut Labs Software
without specific prior written permission from Walnut Labs.  Except as
expressly stated in this notice, no other rights or licenses, express or
implied, are granted by Walnut Labs herein, including but not limited to any
patent rights that may be infringed by your derivative works or by other
works in which the Walnut Labs Software may be incorporated.

The Walnut Labs Software is provided by Walnut Labs on an "AS IS" basis.  Walnut Labs
MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION
THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE, REGARDING THE WALNUT LABS SOFTWARE OR ITS USE AND
OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.

IN NO EVENT SHALL WALNUT LABS BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL
OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION,
MODIFICATION AND/OR DISTRIBUTION OF THE WALNUT LABS SOFTWARE, HOWEVER CAUSED
AND WHETHER UNDER THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE),
STRICT LIABILITY OR OTHERWISE, EVEN IF WALNUT LABS HAS BEEN ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

Copyright (C) 2010 Walnut Labs. All Rights Reserved.
 
*/

#import <Foundation/Foundation.h>


@interface Marker : NSObject {
	float x;
	float y;
}

@property (nonatomic, assign) float x;
@property (nonatomic, assign) float y;

@end
