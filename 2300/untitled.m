
 
//To avoid getting the warning in a push navigation, you can directly use :
[self.view.window.rootViewController presentViewController:viewController animated:YES completion:nil];
And then in your modal view controller, when everything is finished, you can just call :
[self dismissViewControllerAnimated:YES completion:nil];
 
 
 
And to avoid this, you can present a view on childviewcontroller's parent
  [self.parentViewController presentViewController:viewController animated:YES completion:nil];
Wait for viewDidAppear():