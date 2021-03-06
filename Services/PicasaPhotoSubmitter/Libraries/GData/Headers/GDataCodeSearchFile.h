/* Copyright (c) 2007 Google Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

//
//  GDataCodeSearchFile.h
//

#if !GDATA_REQUIRE_SERVICE_INCLUDES || GDATA_INCLUDE_CODESEARCH_SERVICE

#import "GDataObject.h"

// For code search files, like
//
//  <gcs:file name="w3c-libwww-5.4.0/Library/src/wwwsys.h"/>
//
// See http://code.google.com/apis/codesearch/reference.html

@interface GDataCodeSearchFile : GDataObject <NSCopying, GDataExtension> {
  NSString *name_;
}

+ (id)fileWithName:(NSString *)name;

- (id)initWithXMLElement:(NSXMLElement *)element
                  parent:(GDataObject *)parent;

- (NSXMLElement *)XMLElement;

- (NSString *)name;
- (void)setName:(NSString *)str;

@end

#endif // !GDATA_REQUIRE_SERVICE_INCLUDES || GDATA_INCLUDE_CODESEARCH_SERVICE
