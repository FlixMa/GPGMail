//
//  GPGTextDocumentViewerPoser.h
//  GPGMail
//
//  Created by GPGMail Project Team on Mon Sep 16 2002.
//

/*
 *	Copyright GPGMail Project Team (gpgmail-devel@lists.gpgmail.org), 2000-2010
 *	(see LICENSE.txt file for license information)
 */

#import <TextDocumentViewer.h>


@interface GPGTextDocumentViewerPoser : TextDocumentViewer
{

}

- (void) gpgShowPGPSignatureBanner;
- (void) gpgShowPGPEncryptedBanner;
- (void) gpgHideBanner;

- (BOOL) gpgValidateAction:(SEL)anAction;

// Actions connected to menus
- (IBAction) gpgDecrypt:(id)sender;
- (IBAction) gpgAuthenticate:(id)sender;

@end
